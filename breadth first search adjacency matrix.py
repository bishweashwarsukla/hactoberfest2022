# Python3 implementation of the approach
class Graph:
	
	adj = []

	# Function to fill empty adjacency matrix
	def __init__(self, v, e):
		
		self.v = v
		self.e = e
		Graph.adj = [[0 for i in range(v)]
						for j in range(v)]

	# Function to add an edge to the graph
	def addEdge(self, start, e):
		
		# Considering a bidirectional edge
		Graph.adj[start][e] = 1
		Graph.adj[e][start] = 1

	# Function to perform DFS on the graph
	def BFS(self, start):
		
		# Visited vector to so that a
		# vertex is not visited more than
		# once Initializing the vector to
		# false as no vertex is visited at
		# the beginning
		visited = [False] * self.v
		q = [start]

		# Set source as visited
		visited[start] = True

		while q:
			vis = q[0]

			# Print current node
			print(vis, end = ' ')
			q.pop(0)
			
			# For every adjacent vertex to
			# the current vertex
			for i in range(self.v):
				if (Graph.adj[vis][i] == 1 and
					(not visited[i])):
						
					# Push the adjacent node
					# in the queue
					q.append(i)
					
					# set
					visited[i] = True

# Driver code
v, e = 5, 4

# Create the graph
G = Graph(v, e)
G.addEdge(0, 1)
G.addEdge(0, 2)
G.addEdge(1, 3)

# Perform BFS
G.BFS(0)
